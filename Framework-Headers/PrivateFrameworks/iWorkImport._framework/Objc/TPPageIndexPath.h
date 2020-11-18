//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TPPageIndexPath : NSObject <NSCopying>
{
    unsigned long long _sectionIndex;
    unsigned long long _pageIndex;
}

@property (nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithSectionIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2;

@end

