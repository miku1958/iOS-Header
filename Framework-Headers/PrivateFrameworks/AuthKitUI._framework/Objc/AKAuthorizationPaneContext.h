//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAuthorizationPaneViewController, NSMutableArray, UIStackView;

@interface AKAuthorizationPaneContext : NSObject
{
    AKAuthorizationPaneViewController *_paneViewController;
    UIStackView *_stackView;
    NSMutableArray *_internalMutableConstraints;
}

@property (strong, nonatomic) NSMutableArray *internalMutableConstraints; // @synthesize internalMutableConstraints=_internalMutableConstraints;
@property (readonly, nonatomic) NSMutableArray *mutableConstraints;
@property (readonly, nonatomic) AKAuthorizationPaneViewController *paneViewController; // @synthesize paneViewController=_paneViewController;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;

- (void).cxx_destruct;
- (void)addEmptyViewWithSpacing:(double)arg1;
- (void)addSubPane:(id)arg1;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2;
- (id)initWithPaneViewController:(id)arg1 stackView:(id)arg2 mutableConstraints:(id)arg3;

@end

