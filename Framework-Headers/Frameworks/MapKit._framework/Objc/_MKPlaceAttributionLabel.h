//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface _MKPlaceAttributionLabel : NSObject
{
    UIImage *image;
    double textBaselineOffset;
    double imageBaselineOffset;
    NSString *imagePlaceholder;
}

@property (strong) UIImage *image; // @synthesize image;
@property double imageBaselineOffset; // @synthesize imageBaselineOffset;
@property (strong) NSString *imagePlaceholder; // @synthesize imagePlaceholder;
@property double textBaselineOffset; // @synthesize textBaselineOffset;

- (void).cxx_destruct;
- (id)attributionWithString:(id)arg1;

@end

