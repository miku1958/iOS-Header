//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoardUI/NSCopying-Protocol.h>

@protocol BSPathProviding;

@interface BSUIMappedImageCacheOptions : NSObject <NSCopying>
{
    id<BSPathProviding> _containerPathProvider;
}

@property (strong, nonatomic) id<BSPathProviding> containerPathProvider; // @synthesize containerPathProvider=_containerPathProvider;

+ (id)optionsWithContainerPathProvider:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

