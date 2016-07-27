#import "AFURLRequestSerialization.h"

@interface JDBAFgzipRequestSerializer : AFHTTPRequestSerializer

@property (readonly, nonatomic, strong) id <AFURLRequestSerialization> serializer;

+ (instancetype)serializerWithSerializer:(id <AFURLRequestSerialization>)serializer;

@end
