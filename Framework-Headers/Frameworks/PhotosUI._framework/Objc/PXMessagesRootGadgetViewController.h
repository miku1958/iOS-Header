//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetUIViewController.h>

@class PXMessagesGadgetDataSourceManager;

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController
{
    PXMessagesGadgetDataSourceManager *_messagesDataSourceManager;
}

@property (readonly, nonatomic) PXMessagesGadgetDataSourceManager *messagesDataSourceManager; // @synthesize messagesDataSourceManager=_messagesDataSourceManager;
@property (nonatomic) double recentPhotosHeight;

+ (Class)gadgetSpecClass;
- (void).cxx_destruct;
- (id)initWithGadgetDataSourceManager:(id)arg1;
- (void)prepareForPresentationStyle:(long long)arg1;
- (void)viewDidLoad;

@end

