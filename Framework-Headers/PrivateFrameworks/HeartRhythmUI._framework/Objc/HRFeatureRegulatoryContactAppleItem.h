//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HeartRhythmUI/HRFeatureRegulatoryPanelDisplayable-Protocol.h>

@class NSAttributedString, NSString;
@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate;

@interface HRFeatureRegulatoryContactAppleItem : NSObject <HRFeatureRegulatoryPanelDisplayable>
{
    NSString *_productName;
}

@property (readonly, nonatomic) long long cellAccessoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (weak, nonatomic) id<HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;

- (void).cxx_destruct;
- (void)handleUserInteractionWithItemWithHostViewController:(id)arg1;
- (id)initWithProductName:(id)arg1;

@end

