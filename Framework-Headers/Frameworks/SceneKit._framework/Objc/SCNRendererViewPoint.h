//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNRendererViewPoint : NSObject
{
    struct SCNMatrix4 viewMatrix;
    struct SCNMatrix4 projectionMatrix;
}

@property (nonatomic) struct SCNMatrix4 projectionMatrix; // @synthesize projectionMatrix;
@property (nonatomic) struct SCNMatrix4 viewMatrix; // @synthesize viewMatrix;

- (void)dealloc;

@end

