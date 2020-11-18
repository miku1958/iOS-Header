//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>
#import <NewsUI/NUSettings-Protocol.h>

@class NSString;

@interface NUSettings : NSObject <NUSettings, NSCopying>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldShowArticlesInExcerptMode;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

