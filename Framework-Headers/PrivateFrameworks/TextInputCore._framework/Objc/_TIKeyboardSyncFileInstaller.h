//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject
{
    _KSFileEntry *_entry;
}

- (void)dealloc;
- (void)execute;
- (id)initWithEntry:(id)arg1;
- (void)invalidate;
- (BOOL)valid;

@end

