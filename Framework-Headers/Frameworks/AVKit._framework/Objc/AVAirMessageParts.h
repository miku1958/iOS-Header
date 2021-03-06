//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVAirTransportReverseTransformationResultProtocol-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVAirMessageParts : NSObject <AVAirTransportReverseTransformationResultProtocol>
{
    NSDictionary *_uniqueHeaders;
    NSArray *_repeatedHeaders;
    BOOL _isIncomplete;
    NSString *_version;
    NSArray *_headers;
    long long _expectedBodyLength;
    NSData *_rawBodyData;
    NSData *_extraData;
    NSData *_uncompressedBodyData;
}

@property (readonly, nonatomic) id airMessage;
@property (readonly, nonatomic) id bodyAsJSON;
@property (readonly, nonatomic) NSDictionary *bodyAsJSONDictionary;
@property (readonly, nonatomic) NSString *bodyAsUTF8Text;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long expectedBodyLength; // @synthesize expectedBodyLength=_expectedBodyLength;
@property (readonly, nonatomic) NSData *extraData; // @synthesize extraData=_extraData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property (readonly, nonatomic) BOOL isIncomplete; // @synthesize isIncomplete=_isIncomplete;
@property (readonly, nonatomic) NSData *rawBodyData; // @synthesize rawBodyData=_rawBodyData;
@property (readonly, nonatomic) NSArray *repeatedHeaders;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSData *uncompressedBodyData; // @synthesize uncompressedBodyData=_uncompressedBodyData;
@property (readonly, nonatomic) NSDictionary *uniqueHeaders;
@property (readonly, nonatomic) NSString *version; // @synthesize version=_version;

+ (id)messagePartsWithData:(id)arg1 lineSeparator:(id)arg2 data:(id)arg3 headerBodySeparator:(id)arg4 data:(id)arg5 bodyLengthKey:(id)arg6;
+ (void)registerClass:(Class)arg1 forMessageVersion:(id)arg2;
- (void).cxx_destruct;
- (void)_identifyUniqueAndRepeatedHeadersIfNecessary;
- (Class)_matchingClass;
- (void)_setIncomplete;
- (id)decompressBodyUsingAlgorithm:(long long)arg1;
- (id)decompressBodyUsingNamedAlgorithm:(id)arg1;
- (id)initWithVersion:(id)arg1 headers:(id)arg2 expectedBodyLength:(long long)arg3 body:(id)arg4 extra:(id)arg5;
- (BOOL)shouldCallReverseTransformerAgain;

@end

