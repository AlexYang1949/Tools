#import <Foundation/Foundation.h>
#import "SynthesizeSingleton.h"

@interface Tools : NSObject
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(Tools);
+ (NSDictionary *)toDictionary:(id)CLASS;

@end
