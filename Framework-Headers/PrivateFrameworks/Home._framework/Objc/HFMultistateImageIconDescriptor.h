//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFImageIconDescriptor.h>

@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor
{
    NSDictionary *_imageIdentifiersKeyedByPrimaryState;
}

@property (strong, nonatomic) NSDictionary *imageIdentifiersKeyedByPrimaryState; // @synthesize imageIdentifiersKeyedByPrimaryState=_imageIdentifiersKeyedByPrimaryState;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)imageIdentifierForPrimaryState:(long long)arg1;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

