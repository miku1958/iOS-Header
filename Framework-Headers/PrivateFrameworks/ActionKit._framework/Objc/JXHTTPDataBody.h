//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/JXHTTPRequestBody-Protocol.h>

@class NSData, NSString;

@interface JXHTTPDataBody : NSObject <JXHTTPRequestBody>
{
    NSData *_data;
    NSString *_httpContentType;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *httpContentType; // @synthesize httpContentType=_httpContentType;
@property (readonly) Class superclass;

+ (id)withData:(id)arg1;
+ (id)withData:(id)arg1 contentType:(id)arg2;
- (void).cxx_destruct;
- (long long)httpContentLength;
- (id)httpInputStream;
- (id)initWithData:(id)arg1 contentType:(id)arg2;

@end
