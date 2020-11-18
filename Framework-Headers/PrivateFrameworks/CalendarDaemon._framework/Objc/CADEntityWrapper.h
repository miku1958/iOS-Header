//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class CADObjectID, NSArray;

@interface CADEntityWrapper : NSObject <NSSecureCoding>
{
    int _entityType;
    int _rowID;
    NSArray *_loadedValues;
    CADObjectID *_objectID;
    BOOL _deleted;
}

@property (readonly, nonatomic) BOOL deleted; // @synthesize deleted=_deleted;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalEntity:(void *)arg1;
- (id)initWithCalEntity:(void *)arg1 propertiesToLoad:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)loadedValues;
- (id)objectID;

@end

