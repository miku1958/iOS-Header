//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VKObjectBoundsContext : NSObject
{
    vector_554e3200 _points;
    struct VKEdgeInsets _edgePadding;
}

@property (nonatomic) struct VKEdgeInsets edgePadding; // @synthesize edgePadding=_edgePadding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(const vector_554e3200 *)arg1;
- (CDStruct_90e2a262)boundingRect;
- (BOOL)isEmpty;

@end
