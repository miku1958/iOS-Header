//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>

@class NSString;

@interface SBFMagnifyMode : NSObject <NSCopying, BSDescriptionProviding>
{
    float _zoomFactor;
    NSString *_name;
    struct CGSize _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly) Class superclass;
@property (nonatomic) float zoomFactor; // @synthesize zoomFactor=_zoomFactor;

+ (id)currentMagnifyMode;
+ (id)magnifyModeWithSize:(struct CGSize)arg1 name:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

