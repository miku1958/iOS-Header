//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImage.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _UIMappedBitmapImage : UIImage
{
    NSData *_data;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_configureImage:(id)arg1 assumePreconfigured:(BOOL)arg2;
- (void)_preheatBitmapData;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

