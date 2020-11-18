//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface CRKBookmark : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSURL *_URL;
    NSArray *_children;
    NSString *_identifier;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (copy, nonatomic) NSArray *children; // @synthesize children=_children;
@property (readonly, nonatomic, getter=isFavoritesFolder) BOOL favoritesFolder;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;

+ (id)favoritesFolderWithChildren:(id)arg1;
+ (id)folderWithName:(id)arg1 children:(id)arg2;
+ (id)folderWithName:(id)arg1 children:(id)arg2 identifier:(id)arg3;
+ (id)leafBookmarkWithName:(id)arg1 URL:(id)arg2;
+ (id)readingListFolderWithChildren:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)childBookmarks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 URL:(id)arg2 children:(id)arg3 identifier:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFolder;
- (BOOL)isFolderWithIdentifier:(id)arg1;
- (void)setChildBookmarks:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;

@end
