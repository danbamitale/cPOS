/*
 * messages.c
 *
 * this message passing interface is described in here:
 *
 *		http://jpos.org/doc/proguide-draft.pdf
 *	
 * messages are essentially a bit mapping affair. So, using the defines
 * below, a simple '|' operation can easily set a map.
 */

// remove me
#include <stdio.h>


// Message Type Indicator Bit Fields
enum HEADER_MESSAGE_MTI {
HEADER_MTI_VERSION_1987              = 0,
HEADER_MTI_VERSION_1993              = 1,
HEADER_MTI_VERSION_2003              = 2,

HEADER_MTI_VERSION_RESERVED_ISO_LOW  = 3,
HEADER_MTI_VERSION_RESERVED_ISO_HIGH = 7,

HEADER_MTI_VERSION_NATIONAL          = 8,
HEADER_MTI_VERSION_PRIVATE           = 9
};



// Message Class
enum HEADER_MESSAGE {
HEADER_MESSAGE_CLASS_RESERVED_0      = 0,
HEADER_MESSAGE_CLASS_AUTHORIZATION   = 1,
HEADER_MESSAGE_CLASS_FINANCIAL       = 2,
HEADER_MESSAGE_CLASS_FILE_UPDATE     = 3,
HEADER_MESSAGE_CLASS_CHRGBAK         = 4,
HEADER_MESSAGE_CLASS_RECONCILIATION  = 5,
HEADER_MESSAGE_CLASS_ADMINISTRATIVE  = 6,
HEADER_MESSAGE_CLASS_FEECOLLECT      = 7,
HEADER_MESSAGE_CLASS_NETMANAGE       = 8,
HEADER_MESSAGE_CLASS_RESERVED_9      = 9
};


// Message Function
enum HEADER_MESSAGE_FUNC {
HEADER_MESSAGE_FUNCTION_REQUEST           = 0,
HEADER_MESSAGE_FUNCTION_REQUEST_RESPONSE  = 1,
HEADER_MESSAGE_FUNCTION_ADVICE            = 2,
HEADER_MESSAGE_FUNCTION_ADVICE_RESPONSE   = 3,
HEADER_MESSAGE_FUNCTION_NOTIFICATION      = 4,

HEADER_MESSAGE_FUNCTION_RESERVED_ISO_LOW  = 5,
HEADER_MESSAGE_FUNCTION_RESERVED_ISO_HIGH = 9
};

// Transaction Originator
enum HEADER_TRANS_ORIGINATOR {
HEADER_TRANS_ORIGINATOR_ACQUIRER           = 0,
HEADER_TRANS_ORIGINATOR_ACQUIRER_REPEAT    = 1,
HEADER_TRANS_ORIGINATOR_CARD_ISSUER        = 2,
HEADER_TRANS_ORIGINATOR_CARD_ISSUER_REPEAT = 3,
HEADER_TRANS_ORIGINATOR_OTHER              = 4,
HEADER_TRANS_ORIGINATOR_OTHER_REPEAT       = 5,

HEADER_TRANS_ORIGINATOR_RESERVED_ISO_LOW   = 6,
HEADER_TRANS_ORIGINATOR_RESERVED_ISO_HIGH  = 9
};


int main(int argc, char **argv)
{
	printf("%d\n", HEADER_MESSAGE_CLASS_CHRGBAK);
	return 0;
}