//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/NSObject-Protocol.h>

@class NSDictionary;

@protocol STSerializableManagedObject <NSObject>
- (NSDictionary *)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(NSDictionary *)arg1;
@end

