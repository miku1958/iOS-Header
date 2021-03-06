//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView, VUIProductMetadataLayout;

__attribute__((visibility("hidden")))
@interface VUIProductSectionInfoViewModel : NSObject
{
    UIView *_headerView;
    NSArray *_dataViews;
    VUIProductMetadataLayout *_layout;
}

@property (strong, nonatomic) NSArray *dataViews; // @synthesize dataViews=_dataViews;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) VUIProductMetadataLayout *layout; // @synthesize layout=_layout;

+ (id)dataDescriptionViewWithString:(id)arg1 maxLine:(unsigned long long)arg2 layout:(id)arg3 existingView:(id)arg4;
+ (id)dataLabelViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithImage:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
- (void).cxx_destruct;

@end

