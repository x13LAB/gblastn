/* $Id: SeqTable_column.hpp 363564 2012-05-17 15:41:58Z vasilche $
 * ===========================================================================
 *
 *                            PUBLIC DOMAIN NOTICE
 *               National Center for Biotechnology Information
 *
 *  This software/database is a "United States Government Work" under the
 *  terms of the United States Copyright Act.  It was written as part of
 *  the author's official duties as a United States Government employee and
 *  thus cannot be copyrighted.  This software/database is freely available
 *  to the public for use. The National Library of Medicine and the U.S.
 *  Government have not placed any restriction on its use or reproduction.
 *
 *  Although all reasonable efforts have been taken to ensure the accuracy
 *  and reliability of the software and data, the NLM and the U.S.
 *  Government do not and cannot warrant the performance or results that
 *  may be obtained by using this software or data. The NLM and the U.S.
 *  Government disclaim all warranties, express or implied, including
 *  warranties of performance, merchantability or fitness for any particular
 *  purpose.
 *
 *  Please cite the author in any work or product based on this material.
 *
 * ===========================================================================
 *
 */

/// @file SeqTable_column.hpp
/// User-defined methods of the data storage class.
///
/// This file was originally generated by application DATATOOL
/// using the following specifications:
/// 'seqtable.asn'.
///
/// New methods or data members can be added to it if needed.
/// See also: SeqTable_column_.hpp


#ifndef OBJECTS_SEQTABLE_SEQTABLE_COLUMN_HPP
#define OBJECTS_SEQTABLE_SEQTABLE_COLUMN_HPP


// generated includes
#include <objects/seqtable/SeqTable_column_.hpp>

// generated classes

BEGIN_NCBI_SCOPE

BEGIN_objects_SCOPE // namespace ncbi::objects::

class CSeq_id;
class CSeq_loc;
class CSeq_interval;

/////////////////////////////////////////////////////////////////////////////
class NCBI_SEQ_EXPORT CSeqTable_column : public CSeqTable_column_Base
{
    typedef CSeqTable_column_Base Tparent;
public:
    // constructor
    CSeqTable_column(void);
    // destructor
    ~CSeqTable_column(void);

    bool IsSet(size_t row) const;

    bool TryGetBool(size_t row, bool& v) const;
    bool TryGetInt(size_t row, int& v) const;
    bool TryGetReal(size_t row, double& v) const;

    const string* GetStringPtr(size_t row) const;
    const vector<char>* GetBytesPtr(size_t row) const;
    CConstRef<CSeq_id> GetSeq_id(size_t row) const;
    CConstRef<CSeq_loc> GetSeq_loc(size_t row) const;
    CConstRef<CSeq_interval> GetSeq_int(size_t row) const;

private:
    // Prohibit copy constructor and assignment operator
    CSeqTable_column(const CSeqTable_column& value);
    CSeqTable_column& operator=(const CSeqTable_column& value);

};

/////////////////// CSeqTable_column inline methods

// constructor
inline
CSeqTable_column::CSeqTable_column(void)
{
}


/////////////////// end of CSeqTable_column inline methods


END_objects_SCOPE // namespace ncbi::objects::

END_NCBI_SCOPE


#endif // OBJECTS_SEQTABLE_SEQTABLE_COLUMN_HPP
