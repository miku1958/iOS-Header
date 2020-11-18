//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSKChangeGroup : NSObject <NSCopying>
{
    NSMutableArray *_changesArray;
}

@property (readonly, nonatomic) NSMutableArray *changesArray; // @synthesize changesArray=_changesArray;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithChangesArray:(id)arg1;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;

@end

