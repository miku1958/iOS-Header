//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRFileObjectID.h>

@interface BRInodeObjectID : BRFileObjectID
{
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;
- (id)asString;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1;
- (BOOL)isFolderOrAliasID;
- (unsigned long long)rawID;

@end

