//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : NSObject
{
    NSMutableArray *m_objects;
    unsigned int m_maximumSize;
}

@property unsigned int maximumSize; // @synthesize maximumSize=m_maximumSize;

- (void).cxx_destruct;
- (void)clear;
- (int)deleteObject:(unsigned int)arg1;
- (id)getObject:(unsigned int)arg1;
- (id)init;
- (unsigned int)insertPos;
- (int)putObject:(id)arg1 in_objectPos:(unsigned int)arg2;
- (int)selectInto:(int)arg1 io_DC:(id)arg2;
- (int)size;

@end
