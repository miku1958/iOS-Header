//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFModernAtomView.h>

@class NSArray;
@protocol MFCorecipientsIndicatorAtomDelegate;

@interface MFCorecipientsIndicatorAtom : MFModernAtomView
{
    BOOL _touchesWereCancelled;
    id<MFCorecipientsIndicatorAtomDelegate> _delegate;
    NSArray *_recipients;
}

@property (weak, nonatomic) id<MFCorecipientsIndicatorAtomDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRecipients:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

