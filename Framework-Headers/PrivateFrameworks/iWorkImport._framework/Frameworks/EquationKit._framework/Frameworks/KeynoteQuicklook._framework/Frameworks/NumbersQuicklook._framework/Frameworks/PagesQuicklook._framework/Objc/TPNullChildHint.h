//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <PagesQuicklook/TSDArchivedHint-Protocol.h>

@class NSString;
@protocol TSDHint;

@interface TPNullChildHint : TSPObject <TSDArchivedHint>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<TSDHint> hint;
@property (readonly) Class superclass;

- (id)initWithContext:(id)arg1 hint:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
