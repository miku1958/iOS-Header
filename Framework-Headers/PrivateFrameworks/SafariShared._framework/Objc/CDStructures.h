//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BookmarkAndHistoryCompletionMatch {
    unsigned int _field1;
    long long _field2;
    long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    id _field6;
    float _field7;
};

struct CGSize {
    double width;
    double height;
};

struct FrameMetadata {
    CDUnknownFunctionPointerType *_field1;
    struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow, 16> _field2;
    struct OpaqueJSValue *_field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSContext *_field5;
    id _field6;
    id _field7;
};

struct HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>> {
    struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> m_impl;
};

struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> {
    struct KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>> *m_table;
    unsigned int m_tableSize;
    unsigned int m_tableSizeMask;
    unsigned int m_keyCount;
    unsigned int m_deletedCount;
};

struct HistoryURLCompletionItem {
    struct atomic<unsigned int> _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>> _field5;
    struct HistoryURLCompletionItem *_field6;
    id _field7;
    id _field8;
    double _field9;
    int _field10;
    struct vector<int, std::__1::allocator<int>> _field11;
    struct vector<int, std::__1::allocator<int>> _field12;
    id _field13;
    BOOL _field14;
    BOOL _field15;
};

struct KeyValuePair<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>;

struct NSMutableArray {
    Class _field1;
};

struct NSMutableSet {
    Class _field1;
};

struct OpaqueJSContext;

struct OpaqueJSValue;

struct Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> {
    struct BookmarkAndHistoryCompletionMatch *_field1;
};

struct Ref<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>> {
    struct HistoryURLCompletionItem *_field1;
};

struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> {
    struct BookmarkAndHistoryCompletionMatch *m_ptr;
};

struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>> {
    struct HistoryURLCompletionItem *m_ptr;
};

struct RetainPtr<_OpaquePCSShareProtection *> {
    void *m_ptr;
};

struct RetainPtr<_PCSIdentitySetData *> {
    void *m_ptr;
};

struct RetainPtr<const __CFData *> {
    void *m_ptr;
};

struct RetainPtr<const __CTFontDescriptor *> {
    void *_field1;
};

struct SuddenTerminationDisabler;

struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow, 16> {
    struct OpaqueJSValue **_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>>, 0, WTF::CrashOnOverflow, 16> {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> *_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Vector<double, 0, WTF::CrashOnOverflow, 16> {
    double *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16> {
    id *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<int, 0, WTF::CrashOnOverflow, 16> {
    int *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<long long, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<long long, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*> *__next_;
};

struct atomic<LoadingStatus> {
    _Atomic int __a_;
};

struct atomic<unsigned int> {
    _Atomic unsigned int _field1;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long __rep_;
};

struct duration<long long, std::__1::ratio<1, 1000>> {
    long long __rep_;
};

struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> __d_;
};

struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> {
    struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> {
        struct SuddenTerminationDisabler *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<long long, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>>> {
    struct __compressed_pair<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>*, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>>> {
        struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>> *__value_;
    } __ptr_;
};

struct unordered_map<long long, WBSHistoryItem *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryItem *>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryItem *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryItem *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::hash<long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryItem *>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<long long, WBSHistoryVisit *__weak, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, WBSHistoryVisit *__weak>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::hash<long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, WBSHistoryVisit *__weak>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, long long>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, long long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
    struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>, std::__1::allocator<std::__1::__hash_node<long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<long long, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<long long>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>> {
    RefPtr_ed2a6bdb *_field1;
    RefPtr_ed2a6bdb *_field2;
    struct __compressed_pair<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>*, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>> {
        RefPtr_ed2a6bdb *_field1;
    } _field3;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    int webProcessID;
    unsigned long long tabID;
} CDStruct_497cfc99;

typedef struct {
    long long majorVersion;
    long long minorVersion;
    long long patchVersion;
} CDStruct_f6aba300;

typedef struct {
    struct {
        unsigned short _field1;
        unsigned short _field2;
    } _field1[32];
    unsigned long long _field2;
} CDStruct_f2b84ca7;

// Template types
typedef struct Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> {
    struct BookmarkAndHistoryCompletionMatch *_field1;
} Ref_a2762e75;

typedef struct Ref<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>> {
    struct HistoryURLCompletionItem *_field1;
} Ref_acc025bb;

typedef struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>> {
    struct HistoryURLCompletionItem *m_ptr;
} RefPtr_ed2a6bdb;

typedef struct RetainPtr<const __CTFontDescriptor *> {
    void *_field1;
} RetainPtr_887fe677;

typedef struct Vector<WTF::RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>>, 0, WTF::CrashOnOverflow, 16> {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> *_field1;
    unsigned int _field2;
    unsigned int _field3;
} Vector_fc835981;

typedef struct Vector<double, 0, WTF::CrashOnOverflow, 16> {
    double *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector_23cb8338;

typedef struct Vector<int, 0, WTF::CrashOnOverflow, 16> {
    int *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector_3b5d2a9f;

typedef struct duration<long long, std::__1::ratio<1, 1000>> {
    long long __rep_;
} duration_6174cf92;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> __d_;
} time_point_e708cccf;

typedef struct unique_ptr<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>>> {
    struct __compressed_pair<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>*, std::__1::default_delete<std::__1::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>>>> {
        struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem>>>> *__value_;
    } __ptr_;
} unique_ptr_91c700ae;

typedef struct unordered_map<long long, long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, long long>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, long long>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, long long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, long long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, long long>, std::__1::hash<long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, long long>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_map_fcbaed0a;

typedef struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
    struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>, std::__1::allocator<std::__1::__hash_node<long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<long long, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<long long>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_set_da619913;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned int disallowsAutocomplete:1;
        unsigned int claimsToBeCurrentPasswordViaAutocompleteAttribute:1;
        unsigned int claimsToBeNewPasswordViaAutocompleteAttribute:1;
        unsigned int claimsToBeUsernameViaAutocompleteAttribute:1;
        unsigned int looksLikeCreditCardCardholderField:1;
        unsigned int looksLikeCreditCardCompositeExpirationDateField:1;
        unsigned int looksLikeCreditCardNumberField:1;
        unsigned int looksLikeCreditCardSecurityCodeField:1;
        unsigned int looksLikeCreditCardTypeField:1;
        unsigned int looksLikeDayField:1;
        unsigned int looksLikeMonthField:1;
        unsigned int looksLikeYearField:1;
        unsigned int looksLikeIgnoredDataTypeField:1;
        unsigned int looksLikePasswordCredentialField:1;
        unsigned int looksLikeOneTimeCodeField:1;
        unsigned int visible:1;
        unsigned int active:1;
        unsigned int disabled:1;
        unsigned int readOnly:1;
        unsigned int textField:1;
        unsigned int secureTextField:1;
        unsigned int autoFilledTextField:1;
        unsigned int userEditedTextField:1;
        unsigned int labeledUsernameField:1;
    } flags;
    long long asInteger;
} CDUnion_a3b3b741;

