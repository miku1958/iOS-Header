//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIViewController;

@interface CDPRemoteValidationEscapeOffer : NSObject
{
    NSMutableArray *_escapeOptions;
    UIViewController *_presentingViewController;
    NSString *_escapeOfferName;
    NSString *_title;
    NSString *_message;
}

@property (strong, nonatomic) NSString *escapeOfferName; // @synthesize escapeOfferName=_escapeOfferName;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)_actionFromEscapeOption:(id)arg1;
- (long long)_styleForEscapeOption:(id)arg1;
- (void)addEscapeOptionsObject:(id)arg1;
- (void)dismissOfferAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)escapeOptions;
- (void)handleEscapeAction:(id)arg1;
- (id)init;

@end
