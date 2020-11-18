//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXForYouRankable-Protocol.h>

@class NSArray, NSDate;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>
{
    unsigned long long _sourceType;
    id<PXCMMCloudGadgetViewControllerDelegate> _gadgetDelegate;
    NSArray *_contentGadgets;
}

@property (copy, nonatomic) NSArray *contentGadgets; // @synthesize contentGadgets=_contentGadgets;
@property (readonly, nonatomic) long long defaultPriority;
@property (weak, nonatomic) id<PXCMMCloudGadgetViewControllerDelegate> gadgetDelegate; // @synthesize gadgetDelegate=_gadgetDelegate;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;

+ (id)new;
- (void).cxx_destruct;
- (void)didUpdateCloudPhotoLibraryEnablement:(id)arg1;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithSourceType:(unsigned long long)arg1;
- (void)presentationRequestForWelcomeCloudViewController:(id)arg1;
- (void)resetPriorityDate;

@end
