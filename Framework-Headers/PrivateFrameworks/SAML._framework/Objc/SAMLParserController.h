//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SAMLParserController : NSObject
{
    NSData *_schemaData;
}

@property (strong, nonatomic) NSData *schemaData; // @synthesize schemaData=_schemaData;

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)dataFromString:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)newAttributeQuery:(id)arg1 error:(id *)arg2;
- (id)newAuthNRequest:(id)arg1 error:(id *)arg2;
- (id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id *)arg3;
- (id)newLogoutRequest:(id *)arg1;
- (id)parseCachedResponse:(id)arg1 error:(id *)arg2;
- (id)parseResponse:(id)arg1 error:(id *)arg2;
- (id)schema;

@end

