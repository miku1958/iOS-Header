//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCDocumentItem, BRCItemID, BRCLocalItem, BRCPackageItem, BRCRelativePath, BRCServerItem;

@interface BRCPathToItemLookup : NSObject
{
    BRCRelativePath *_pathOfItem;
    BRCRelativePath *_relpathOfFSEvent;
    BRCLocalItem *_matchByFileID;
    BRCDocumentItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverItem;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCItemID *_parentID;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parentID:1;
        unsigned int serverItem:1;
        unsigned int serverByPath:1;
        unsigned int packageItem:1;
    } _fetched;
}

@property (strong, nonatomic) BRCDocumentItem *byDocumentID;
@property (strong, nonatomic) BRCLocalItem *byFileID;
@property (readonly, nonatomic) BRCLocalItem *byPath;
@property (readonly, nonatomic) BRCItemID *parentID;
@property (readonly, nonatomic) BRCRelativePath *relpathOfFSEvent; // @synthesize relpathOfFSEvent=_relpathOfFSEvent;
@property (readonly, nonatomic) BRCRelativePath *relpathOfItem; // @synthesize relpathOfItem=_pathOfItem;
@property (readonly, nonatomic) BRCServerItem *serverByPath;

+ (id)lookupForRelativePath:(id)arg1;
- (void).cxx_destruct;
- (id)_byPathWithLastPathComponent:(id)arg1;
- (BOOL)_fetchByDocumentID;
- (BOOL)_fetchByFileID;
- (BOOL)_fetchByPath;
- (id)byPathWithLastPathComponent:(id)arg1;
- (id)description;
- (id)initWithRelativePath:(id)arg1;

@end
