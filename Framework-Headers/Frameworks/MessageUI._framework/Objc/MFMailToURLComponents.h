//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MFMailToURLComponents : NSObject
{
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_subject;
    NSString *_body;
}

@property (readonly, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property (readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property (readonly, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property (readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (readonly, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;

+ (id)componentsWithURL:(id)arg1;
- (void)_decomposeURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;

@end

