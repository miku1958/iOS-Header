//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface AXSimpleMessage : NSObject
{
    NSDictionary *_payload;
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;

+ (id)messageWithPayload:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithPayload:(id)arg1;

@end
