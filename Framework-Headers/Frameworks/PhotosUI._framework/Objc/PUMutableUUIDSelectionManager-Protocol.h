//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol PUMutableUUIDSelectionManager <NSObject>
- (void)addSelectedUUID:(NSString *)arg1;
- (void)deselectAllUUIDs;
- (void)removeSelectedUUID:(NSString *)arg1;
- (void)setSelectedUUIDs:(NSSet *)arg1;
@end
