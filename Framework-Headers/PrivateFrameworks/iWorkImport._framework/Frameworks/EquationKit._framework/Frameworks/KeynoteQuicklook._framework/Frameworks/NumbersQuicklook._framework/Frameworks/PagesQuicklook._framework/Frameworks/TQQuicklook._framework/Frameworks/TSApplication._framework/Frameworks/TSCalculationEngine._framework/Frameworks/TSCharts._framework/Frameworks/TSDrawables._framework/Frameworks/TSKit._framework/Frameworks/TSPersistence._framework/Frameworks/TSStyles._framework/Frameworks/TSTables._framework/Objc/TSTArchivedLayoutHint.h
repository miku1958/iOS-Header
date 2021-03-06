//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/TSDArchivedHint-Protocol.h>

@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSTLayoutHint *mHint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSTLayoutHint *hint; // @synthesize hint=mHint;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end

