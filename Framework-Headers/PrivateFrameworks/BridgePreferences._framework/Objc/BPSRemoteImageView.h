//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface BPSRemoteImageView : UIImageView
{
    NSString *_desiredImageName;
    NSString *_fallbackImageName;
}

@property (copy, nonatomic) NSString *desiredImageName; // @synthesize desiredImageName=_desiredImageName;
@property (copy, nonatomic) NSString *fallbackImageName; // @synthesize fallbackImageName=_fallbackImageName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)updateImagesWithAnimation:(BOOL)arg1;

@end
