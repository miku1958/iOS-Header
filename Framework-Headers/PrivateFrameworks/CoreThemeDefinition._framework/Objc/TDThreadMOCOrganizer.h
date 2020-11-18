//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreThemeDocument, NSThread;

@interface TDThreadMOCOrganizer : NSObject
{
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)document;
- (id)init;
- (id)initWithDocument:(id)arg1 mainThread:(id)arg2;
- (id)mainMOC;
- (id)mainThread;
- (void)setThreadMOC:(id)arg1;
- (id)threadMOC;

@end
