//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FLSpecifierTapHandlerDelegate;

@interface FLSpecifierTapHandler : NSObject
{
    id<FLSpecifierTapHandlerDelegate> _delegate;
}

@property (weak, nonatomic) id<FLSpecifierTapHandlerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_handleActionForItem:(id)arg1 fromSpecifier:(id)arg2 eventSource:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)actionTapped:(id)arg1 eventSource:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)description;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)stopSpinnerForSpecifier:(id)arg1;

@end

