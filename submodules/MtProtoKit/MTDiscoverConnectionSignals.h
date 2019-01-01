#import <Foundation/Foundation.h>
#import "MTDiscoverConnectionSignals.h"

@class MTContext;
@class MTSignal;

@interface MTDiscoverConnectionSignals : NSObject

typedef struct {
    uint8_t nonce[16];
} MTPayloadData;

+ (MTSignal *)discoverSchemeWithContext:(MTContext *)context addressList:(NSArray *)addressList media:(bool)media isProxy:(bool)isProxy;

+ (NSData *)payloadData:(MTPayloadData *)outPayloadData;

@end
