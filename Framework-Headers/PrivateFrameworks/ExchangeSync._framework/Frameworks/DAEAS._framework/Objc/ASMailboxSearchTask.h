//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASSearchTask.h>

@interface ASMailboxSearchTask : ASSearchTask
{
}

- (void)_appendSearchOptions:(id)arg1;
- (void)_appendSearchQuery:(id)arg1;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (void)performTask;
- (BOOL)processContext:(id)arg1;
- (id)replacementObjectForEmailItem:(id)arg1;
- (id)requestBody;
- (BOOL)requiresEASVersionInformaton;

@end

