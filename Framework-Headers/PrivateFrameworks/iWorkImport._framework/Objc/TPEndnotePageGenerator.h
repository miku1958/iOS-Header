//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TPPageGenerator-Protocol.h>

@class NSString, TPFootnoteLayoutController;

__attribute__((visibility("hidden")))
@interface TPEndnotePageGenerator : NSObject <TPPageGenerator>
{
    TPFootnoteLayoutController *_footnoteLayoutController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createOrUpdatePageHintInSectionHint:(id)arg1 withState:(id)arg2;
- (id)init;
- (id)initWithFootnoteLayoutController:(id)arg1;
- (BOOL)wantsPageInSectionHint:(id)arg1 withState:(id)arg2;

@end

