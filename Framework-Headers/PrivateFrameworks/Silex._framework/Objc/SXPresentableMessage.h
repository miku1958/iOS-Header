//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentableMessage : NSObject
{
    NSString *_recipient;
    NSString *_message;
}

@property (readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (readonly, copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;

- (void).cxx_destruct;
- (id)initWithRecipient:(id)arg1 message:(id)arg2;

@end
