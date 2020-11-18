//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>

@class INImage, INParameter;

@interface INParameterImage : NSObject <NSCopying>
{
    INParameter *_parameter;
    INImage *_image;
}

@property (readonly, copy, nonatomic) INImage *image; // @synthesize image=_image;
@property (readonly, copy, nonatomic) INParameter *parameter; // @synthesize parameter=_parameter;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameter:(id)arg1 image:(id)arg2;

@end
