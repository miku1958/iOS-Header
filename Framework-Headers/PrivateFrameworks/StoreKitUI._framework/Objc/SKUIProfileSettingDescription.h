//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISettingDescription.h>

@class NSOperationQueue, NSString, UIImage;

@interface SKUIProfileSettingDescription : SKUISettingDescription
{
    NSString *_handle;
    NSString *_name;
    NSOperationQueue *_operationQueue;
    UIImage *_photo;
}

@property (readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) UIImage *photo; // @synthesize photo=_photo;

+ (Class)_viewClassForSettingDescription:(id)arg1;
- (void).cxx_destruct;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;
- (void)dealloc;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (void)reloadData;

@end

