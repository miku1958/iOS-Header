//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNActionView;

@protocol CNActionViewDelegate <NSObject>
- (void)didPressActionView:(CNActionView *)arg1 longPress:(BOOL)arg2;

@optional
- (BOOL)actionViewShouldPresentDisambiguationUI:(CNActionView *)arg1;
@end

