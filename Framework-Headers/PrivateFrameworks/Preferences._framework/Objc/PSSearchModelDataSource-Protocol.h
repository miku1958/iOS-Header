//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class NSArray, PSSearchModel;

@protocol PSSearchModelDataSource <NSObject>
- (NSArray *)rootSpecifiersForSearchModel:(PSSearchModel *)arg1;

@optional
- (Class)rootSearchControllerClassForSearchModel:(PSSearchModel *)arg1;
@end

