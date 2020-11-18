//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/_UILayoutEngineSuspending-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending>
{
    BOOL _isLayoutEngineSuspended;
    CALayer *_mask;
}

@property (nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) BOOL _layoutEngineSuspended; // @synthesize _layoutEngineSuspended=_isLayoutEngineSuspended;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CALayer *mask; // @synthesize mask=_mask;
@property (readonly) Class superclass;

+ (id)classFallbacksForKeyedArchiver;
- (void).cxx_destruct;
- (id)_cell;
- (void)_tableViewCellContentViewCommonSetup;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateConstraintsIfNeeded;

@end

