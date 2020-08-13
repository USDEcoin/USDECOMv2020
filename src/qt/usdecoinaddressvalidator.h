// Copyright (c) 2011-2014 The Usdecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef USDECOIN_QT_USDECOINADDRESSVALIDATOR_H
#define USDECOIN_QT_USDECOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class UsdecoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit UsdecoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Usdecoin address widget validator, checks for a valid usdecoin address.
 */
class UsdecoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit UsdecoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // USDECOIN_QT_USDECOINADDRESSVALIDATOR_H
