//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CIMetalWrapper : CIFilter
{
    NSMutableDictionary *_dict;
    NSString *inputFilterName;
}

@property (strong) NSMutableDictionary *_dict; // @synthesize _dict;
@property (copy) NSString *inputFilterName; // @synthesize inputFilterName;

- (id)attributes;
- (void)dealloc;
- (id)dummyImagesForImages:(id)arg1;
- (id)init;
- (id)inputKeys;
- (id)outputImage;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
