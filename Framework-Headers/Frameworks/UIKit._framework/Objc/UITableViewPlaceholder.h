//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString;

@interface UITableViewPlaceholder : NSObject
{
    CDUnknownBlockType _cellUpdateHandler;
    NSIndexPath *_insertionIndexPath;
    NSString *_reuseIdentifier;
    double _rowHeight;
}

@property (copy, nonatomic) CDUnknownBlockType cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
@property (strong, nonatomic) NSIndexPath *insertionIndexPath; // @synthesize insertionIndexPath=_insertionIndexPath;
@property (strong, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;

- (void).cxx_destruct;
- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2 rowHeight:(double)arg3;

@end

