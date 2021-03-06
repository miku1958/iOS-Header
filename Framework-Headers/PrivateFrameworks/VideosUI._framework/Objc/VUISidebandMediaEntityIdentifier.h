//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIMediaEntityIdentifierInternal-Protocol.h>

@class NSManagedObjectID, NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>
{
    NSManagedObjectID *_managedObjectID;
    VUIMediaEntityType *_mediaEntityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithManagedObjectID:(id)arg1 mediaEntityType:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

