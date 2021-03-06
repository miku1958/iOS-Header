//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UILayoutEngineSuspending-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending>
{
    struct {
        unsigned int edgesForOverridingDefaultLayoutMargins:4;
    } _contentViewFlags;
    BOOL _isLayoutEngineSuspended;
    struct NSDirectionalEdgeInsets _overriddenDefaultLayoutMargins;
}

@property (nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) BOOL _layoutEngineSuspended; // @synthesize _layoutEngineSuspended=_isLayoutEngineSuspended;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) struct NSDirectionalEdgeInsets overriddenDefaultLayoutMargins; // @synthesize overriddenDefaultLayoutMargins=_overriddenDefaultLayoutMargins;
@property (readonly) Class superclass;

+ (id)classFallbacksForKeyedArchiver;
- (struct UIEdgeInsets)_concreteDefaultLayoutMargins;
- (void)_tableViewCellContentViewCommonSetup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;

@end

